//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TASVoiceRoomMetaDetailsView_h
#define TASVoiceRoomMetaDetailsView_h
@import Foundation;

@class UIView;

@interface TASVoiceRoomMetaDetailsView : UIView { // (Swift)
    /* instance variables */
    @40@0:8:16@24@32 $__lazy_storage_$_stackView;
    @40@0:8:16@24@32 $__lazy_storage_$_dateLabel;
    @40@0:8:16@24@32 $__lazy_storage_$_separatorLabel;
    @40@0:8:16@24@32 $__lazy_storage_$_listenerCountLabel;
}

/* instance methods */
- (id)init;
- (id)initWithCoder:(id)coder;
- (void)updateWithEndDate:(id)date totalParticipatedCount:(id)count;
- (void)updateLiveWithTotalParticipatingCount:(id)count;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* TASVoiceRoomMetaDetailsView_h */
