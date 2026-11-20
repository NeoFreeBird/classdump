//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef XPhotoEditorSessionSummary_h
#define XPhotoEditorSessionSummary_h
@import Foundation;

@class NSObject, NSString;

@interface XPhotoEditorSessionSummary : NSObject // (Swift)

@property (nonatomic, readonly) NSString *filterId;
@property (nonatomic, readonly) _Bool filterIntensityCustomized;
@property (nonatomic, readonly) long long uniqueFiltersSeenCount;
@property (nonatomic, readonly) _Bool enhanced;
@property (nonatomic, readonly) _Bool cropped;
@property (nonatomic, readonly) NSString *cropAspectRatio;
@property (nonatomic, readonly) _Bool rotated;
@property (nonatomic, readonly) _Bool flippedHorizontal;
@property (nonatomic, readonly) long long textOverlayCount;
@property (nonatomic, readonly) long long drawingStrokeCount;
@property (nonatomic, readonly) long long blurStrokeCount;
@property (nonatomic, readonly) _Bool grokImagineApplied;
@property (nonatomic, readonly) _Bool altTextSet;
@property (nonatomic, readonly) _Bool contentSettingsChanged;

/* instance methods */
- (id)initWithFilterId:(id)id filterIntensityCustomized:(_Bool)customized uniqueFiltersSeenCount:(long long)count enhanced:(_Bool)enhanced cropped:(_Bool)cropped cropAspectRatio:(id)ratio rotated:(_Bool)rotated flippedHorizontal:(_Bool)horizontal textOverlayCount:(long long)count drawingStrokeCount:(long long)count blurStrokeCount:(long long)count grokImagineApplied:(_Bool)applied altTextSet:(_Bool)set contentSettingsChanged:(_Bool)changed;
- (id)init;

@end

#endif /* XPhotoEditorSessionSummary_h */
