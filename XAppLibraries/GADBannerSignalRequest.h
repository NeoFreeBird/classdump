//
#ifndef GADBannerSignalRequest_h
#define GADBannerSignalRequest_h
@import Foundation;

#include "GADAdOptionProviding-Protocol.h"
#include "GADSignalRequest.h"
#include "GADVideoOptions.h"

@class NSArray, NSString;

@interface GADBannerSignalRequest : GADSignalRequest <GADAdOptionProviding>

@property (nonatomic) _Bool enableManualImpressions;
@property (nonatomic) struct GADAdSize { struct CGSize { double x0; double x1; } x0; unsigned long long x1; } adSize;
@property (copy, nonatomic) NSArray *adSizes;
@property (copy, nonatomic) GADVideoOptions *videoOptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithSignalType:(id)type;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)adOptionParameters;
- (id)adType;

@end

#endif /* GADBannerSignalRequest_h */
