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
