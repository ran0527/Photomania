//
//  Photo+Flickr.h
//  Photomania
//
//  Created by Kaiqi on 11/17/15.
//  Copyright © 2015 self.edu. All rights reserved.
//

#import "Photo.h"

@interface Photo (Flickr)

+ (Photo *)photoWithFlickrInfo:(NSDictionary *)photoDictionary
        inManagedObjectContext:(NSManagedObjectContext *)context;

+ (void)loadPhotosFromFlickrArray:(NSArray *)photos //of Flickr NSDictionary
          intoManagedObjectContext:(NSManagedObjectContext *)context;

@end
