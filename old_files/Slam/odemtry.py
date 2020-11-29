class OdemetryTracker(Object):
    def __init__(self, wheel_diameter, robot_width, x_init=0, y_init=0, r_init=0):
        self.wheel_diameter = wheel_diameter
        self.robot_width = robot_width
        self.x = x
        self.y = y
        self.r = r
    
    def addEncoderInput(self, left, right): #in radians
        left *= self.wheel_diameter
        right *= self.wheel_diameter
        r = (self.robot_width/2)*((left+right)/(left-right))
        theta = (left-right)/self.robot_width
        x1 = math.cos(theta)*r
        y1 = math.sin(theta)*r
        x2 = math.cos(self.r)*x1-math.sin(self.r)*y1
        y2 = math.sin(self.r)*x1+math.cos(self.r)*y1
        self.x+=x2
        self.y+=y2
        self.r+=theta