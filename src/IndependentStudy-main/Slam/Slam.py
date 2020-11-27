import math

cluster_tolerances = 0.01

class SlamReading(Object):
    def __init__(self):
        self.point_cloud_x_sort = []
        self.point_cloud_y_sort = []

    def add_new_points(self, pose_x, pose_y, pose_r, points): #points tuple with (distance, rotation)
        for point in points:
            angle = (point[1]+pose_r)%(math.pi*2)
            distances = (point[0]*math.cos(angle),point[0]*math.sin(angle))
            for i in range(0,len(self.point_cloud_x_sort)):
                if(distances < self.point_cloud_x_sort[i]):
                    self.point_cloud_x_sort.insert(i,distances)
                    x_index = i
                    break
                if(i == len(self.point_cloud_x_sort)-1):
                    self.point_cloud_x_sort.append(distances)
            for i in range(0,len(self.point_cloud_y_sort)):
                if(distances[1] == self.point_cloud_y_sort[i][1] and distances[0] < self.point_cloud_y_sort[i][0] or distances[1] < self.point_cloud_y_sort[i][1]):
                    self.point_cloud_y_sort.append(i,distances)
                    y_index = i
                    break
                if(i == len(self.point_cloud_y_sort)-1):
                    self.point_cloud_y_sort.append(distances)
    
    def pythag_points(p1,p2):
        d = math.hypot(p1[0]-p2[0],p1[1]-p2[1])
        if(d < cluster_tolerances): 
            return True
        return False
