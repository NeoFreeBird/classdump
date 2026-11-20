//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TCRComposerToolbarConfiguration_h
#define TCRComposerToolbarConfiguration_h
@import Foundation;

@class NSObject, NSString;

@interface TCRComposerToolbarConfiguration : NSObject // (Swift)

@property (nonatomic) _Bool isGalleryEnabled;
@property (nonatomic) _Bool isCameraEnabled;
@property (nonatomic) _Bool isGIFEnabled;
@property (nonatomic) _Bool isLiveVisible;
@property (nonatomic) _Bool isLiveEnabled;
@property (nonatomic) _Bool isPollEnabled;
@property (nonatomic) _Bool isQuoteVisible;
@property (nonatomic) _Bool isLocationEnabled;
@property (nonatomic) _Bool isGrokImagineVisible;
@property (nonatomic) _Bool isContentDisclosureVisible;
@property (nonatomic) _Bool isSchedulingAvailable;
@property (nonatomic) _Bool isSchedulingEnabled;
@property (nonatomic) _Bool isScheduled;
@property (nonatomic, copy) NSString *audienceIconName;

/* instance methods */
- (id)init;

@end

#endif /* TCRComposerToolbarConfiguration_h */
