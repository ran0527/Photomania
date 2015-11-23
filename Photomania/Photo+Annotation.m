//
//  Photo+Annotation.m
//  Photomania
//
//  Created by Kaiqi on 11/23/15.
//  Copyright © 2015 self.edu. All rights reserved.
//

#import "Photo+Annotation.h"

@implementation Photo (Annotation)

- (CLLocationCoordinate2D)coordinate
{
    CLLocationCoordinate2D coordinate;
    
    coordinate.latitude = [self.latitude doubleValue];
    coordinate.longitude = [self.longitude doubleValue];
    
    return coordinate;
}

@end
