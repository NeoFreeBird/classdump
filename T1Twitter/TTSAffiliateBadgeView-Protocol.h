//
#ifndef TTSAffiliateBadgeView_Protocol_h
#define TTSAffiliateBadgeView_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@class NSString, TIPImagePipeline;

@protocol TTSAffiliateBadgeView <NSObject>

@required

@property (retain, nonatomic) TIPImagePipeline *imagePipeline;
@property (copy, nonatomic) NSString *imageURLStr;
@property (copy, nonatomic) NSString *descriptionStr;

/* required instance methods */
- (double)preferredHeightForLayoutMetrics:(id)metrics;

@optional

@end

#endif /* TTSAffiliateBadgeView_Protocol_h */
