

#import "SCPost.h"
#import <MapKit/MapKit.h>

@implementation SCPost


- (instancetype)initWithDictionary:(NSDictionary *)dictionary
{
    self = [super init];
    if (self != nil) {
        self.message = dictionary[@"message"];
    }
    return self;
}

@end
