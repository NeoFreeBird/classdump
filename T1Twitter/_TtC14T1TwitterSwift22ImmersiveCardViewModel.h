//
#ifndef _TtC14T1TwitterSwift22ImmersiveCardViewModel_h
#define _TtC14T1TwitterSwift22ImmersiveCardViewModel_h
@import Foundation;

@class Swift.Bool, T1TwitterSwift.ImmersiveCardType, T1TwitterSwift.ImmersiveCardViewModelDelegate ?, T1TwitterSwift.ImmersiveMediaPagerDataSource ?, T1TwitterSwift.ImmersiveSingleItemProtocol ?, _$s10Foundation4DateVMn ?, _$s14TFSTwitterCore22TwitterEntityTimestampCMn ?, _$sSSSg, _$sSi, _$sSiSg, _$sSo17TFNTwitterAccountC, _$sSo23TFSTwitterScribeContextC, _$sSo24TAVPlayerSessionProducerCSg, _$syycSg, _TtCs12_SwiftObject, __C.CMTime ?, __C.ImmersiveViewSource;

@interface T1TwitterSwift.ImmersiveCardViewModel : Swift._SwiftObject { // (Swift)
    /* instance variables */
    T1TwitterSwift.ImmersiveCardType cardType;
    Swift.Bool isTopTweetCard;
    __C.ImmersiveViewSource viewSource;
    __C.TAVPlayerSessionProducer? _playerSessionProducer;
    __C.CMTime ? initialSeekTime;
    nominal type descriptor for TFSTwitterCore.TwitterEntityTimestamp ? clipTimestamp;
    Swift.Bool opensAtTimestamp;
    Swift.Int initialMediaIndex;
    __C.TFSTwitterScribeContext parentScribeContext;
    Swift.Int sessionCardIndex;
    Swift.Int? currentMediaIndex;
    Swift.String? sessionId;
    T1TwitterSwift.ImmersiveSingleItemProtocol ? statusItemViewModel;
    (() -> ())? statusItemUpdated;
    T1TwitterSwift.ImmersiveMediaPagerDataSource ? mediaPagerDataSource;
    T1TwitterSwift.ImmersiveCardViewModelDelegate ? immersiveCardDelegate;
    __C.TFNTwitterAccount account;
    __C.TFSTwitterScribeContext scribeContext;
    nominal type descriptor for Foundation.Date ? lingerStartTime;
}

/* instance methods */
- (void)statusItemDidUpdate:(id)update;

@end

#endif /* _TtC14T1TwitterSwift22ImmersiveCardViewModel_h */
