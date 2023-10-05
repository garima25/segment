//
//  SEGAppICEIntegrationFactory.h
//  SegmentIntegration
//
//  Created by garima paliwal on 29/09/23.
//

#import <Foundation/Foundation.h>

#if defined(__has_include) && __has_include(<Analytics/SEGIntegration.h>)
#import <Analytics/SEGIntegrationFactory.h>
#elif defined(__has_include) && __has_include(<Segment/SEGIntegration.h>)
#import <Segment/SEGIntegrationFactory.h>
#else
#import "SEGIntegrationFactory.h"
#endif

@interface SEGAppICEIntegrationFactory : NSObject <SEGIntegrationFactory>

+ (instancetype)instance;

@end

