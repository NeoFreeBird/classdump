//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TAFDynamicVideoAdResponseItem_h
#define TAFDynamicVideoAdResponseItem_h
@import Foundation;

@class NSObject, NSString, TFSTwitterDynamicVideoAd;

@interface TAFDynamicVideoAdResponseItem : NSObject

@property (readonly, nonatomic) TFSTwitterDynamicVideoAd *ad;
@property (readonly, copy, nonatomic) NSString *passthroughString;

/* instance methods */
- (id)initWithAd:(id)ad passthroughString:(id)string;
- (id)init;
- (id)description;

@end

#endif /* TAFDynamicVideoAdResponseItem_h */
