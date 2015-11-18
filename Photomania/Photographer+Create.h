//
//  Photographer+Create.h
//  Photomania
//
//  Created by Kaiqi on 11/17/15.
//  Copyright © 2015 self.edu. All rights reserved.
//

#import "Photographer.h"

@interface Photographer (Create)

+ (Photographer *)photographerWithName:(NSString *)name
                inManagedObjectContext:(NSManagedObjectContext *)context;


@end
