//
#ifndef ODCConversionService_Protocol_h
#define ODCConversionService_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@class NSString;

@protocol ODCConversionService <NSObject>

@required

@property (readonly, nonatomic) NSString *versionString;
@property (readonly, nonatomic) long long versionNumber;

/* required instance methods */
- (void)setFirstLaunchTime:(id)time;
- (void)fetchAggregateConversionInfoForInteraction:(long long)interaction completion:(id /* block */)completion;
- (void)fetchMeasurementInfoForInteraction:(long long)interaction completion:(id /* block */)completion;

@optional

@end

#endif /* ODCConversionService_Protocol_h */
