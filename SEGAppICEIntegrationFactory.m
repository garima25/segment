
#import "SEGAppICEIntegrationFactory.h"
#import "SEGAppICEIntegration.h"

@implementation SEGAppICEIntegrationFactory

+ (instancetype)instance
{
    static dispatch_once_t once;
    static SEGAppICEIntegrationFactory *sharedInstance;
    dispatch_once(&once, ^{
        sharedInstance = [[self alloc] init];
    });
    return sharedInstance;
}

- (id)init
{
    self = [super init];
    return self;
}

- (id<SEGIntegration>)createWithSettings:(NSDictionary *)settings forAnalytics:(SEGAnalytics *)analytics
{
    return [[SEGAppICEIntegration alloc] initWithSettings:settings];
}

- (NSString *)key
{
    return @"AppICE";
}

@end
