//
#ifndef _TtC14T1TwitterSwift26DirectMessageCardViewModel_h
#define _TtC14T1TwitterSwift26DirectMessageCardViewModel_h
@import Foundation;

@class NSObject, Swift.Bool, T1TwitterSwift.DirectMessageCardRecipientViewModel, _$sSS, _$sSSSg, _$sSaySSG, _$sSo21TFNTwitterCardContextC, __C.CGSize;

@interface T1TwitterSwift.DirectMessageCardViewModel : NSObject { // (Swift)
    /* instance variables */
    Swift.String? title;
    [Swift.String] buttonTexts;
    [Swift.String] welcomeMessageIds;
    Swift.String imageURLString;
    Swift.String imageAlternateText;
    __C.CGSize imageDimensions;
    Swift.Bool isMediaViewHidden;
    Swift.Bool isMediaViewOverlayHidden;
    Swift.Bool isMediaViewPlayButtonHidden;
    Swift.Bool isVideoAvailable;
    T1TwitterSwift.DirectMessageCardRecipientViewModel recipientViewModel;
    __C.TFNTwitterCardContext cardContext;
}

/* instance methods */
- (id)init;

@end

#endif /* _TtC14T1TwitterSwift26DirectMessageCardViewModel_h */
