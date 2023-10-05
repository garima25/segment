//
//  SEGAppICEIntegration.h
//  SegmentIntegration
//
//  Created by garima paliwal on 29/09/23.
//

#import <Foundation/Foundation.h>

#if defined(__has_include) && __has_include(<Analytics/SEGIntegration.h>)
#import <Analytics/SEGIntegration.h>
#elif defined(__has_include) && __has_include(<Segment/SEGIntegration.h>)
#import <Segment/SEGIntegration.h>
#else
#import "SEGIntegration.h"
#endif

@interface SEGAppICEIntegration : NSObject <SEGIntegration>

@property (nonatomic, strong) NSDictionary *settings;

- (instancetype)initWithSettings:(NSDictionary *)settings;

@end


