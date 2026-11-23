//
#ifndef TFSTwitterDynamicVideoAds_h
#define TFSTwitterDynamicVideoAds_h
@import Foundation;

@class NSArray, NSObject;

@interface TFSTwitterDynamicVideoAds : NSObject { // (Swift)
    /* instance variables */
    void * /* unknown */ videoAds;
    void * /* unknown */ passthrough;
}

@property (nonatomic, readonly) NSArray *videoAdsArray;
@property (nonatomic, readonly) NSArray *passthroughArray;

/* class methods */
+ (id)dynamicVideoAds:(id)ads error:(id *)error;

/* instance methods */
- (id)initWithArray:(id)array passthroughArray:(id)array;
- (id)init;

@end

#endif /* TFSTwitterDynamicVideoAds_h */
