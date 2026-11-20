//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1LiveEventCellCardViewModel_h
#define T1LiveEventCellCardViewModel_h
@import Foundation;

@class NSAttributedString, NSObject, NSString, TFNTwitterCardContext, TFSTwitterEntityImageInfo, TFSTwitterLiveEvent;

@interface T1LiveEventCellCardViewModel : NSObject

@property (readonly, nonatomic) TFNTwitterCardContext *cardContext;
@property (readonly, nonatomic) TFSTwitterLiveEvent *event;
@property (readonly, copy, nonatomic) NSAttributedString *attributedTitleString;
@property (readonly, copy, nonatomic) NSAttributedString *attributedSubtitleString;
@property (readonly, copy, nonatomic) NSAttributedString *attributedLiveString;
@property (readonly, copy, nonatomic) NSString *accessibilityLabel;
@property (readonly, nonatomic) TFSTwitterEntityImageInfo *eventThumbnailImageInfo;

/* instance methods */
- (id)init;
- (id)initWithCardContext:(id)context;

@end

#endif /* T1LiveEventCellCardViewModel_h */
