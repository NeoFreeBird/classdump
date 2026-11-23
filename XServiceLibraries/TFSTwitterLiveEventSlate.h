//
#ifndef TFSTwitterLiveEventSlate_h
#define TFSTwitterLiveEventSlate_h
@import Foundation;

#include "TFSTwitterEntityImageInfo.h"
#include "TFSTwitterLiveEventAttribution.h"
#include "TFSTwitterRects.h"

@class NSObject, NSString;

@interface TFSTwitterLiveEventSlate : NSObject // (Swift)

@property (nonatomic, readonly) NSString *slateID;
@property (nonatomic, readonly) long long tweetID;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSString *subtitle;
@property (nonatomic, readonly) NSString *badge;
@property (nonatomic, readonly) TFSTwitterEntityImageInfo *imageInfo;
@property (nonatomic, readonly) TFSTwitterRects *focusRects;
@property (nonatomic, readonly) TFSTwitterLiveEventAttribution *attribution;

/* class methods */
+ (id)focusRectsFromOriginalInfoDictionary:(id)dictionary imageDimensions:(struct CGSize { double x0; double x1; })dimensions;

/* instance methods */
- (id)initWithJSONDictionary:(id)jsondictionary;
- (id)init;

@end

#endif /* TFSTwitterLiveEventSlate_h */
