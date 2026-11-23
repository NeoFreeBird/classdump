//
#ifndef PTVBroadcastParticipantsCountView_h
#define PTVBroadcastParticipantsCountView_h
@import Foundation;

@class UIImageView, UILabel, UIView;

@interface PTVBroadcastParticipantsCountView : UIView {
    /* instance variables */
    UIImageView *_participantsImage;
    UILabel *_participantsLabel;
}

/* instance methods */
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame nWatching:(long long)watching;
- (void)setNWatching:(long long)nwatching;
- (id)participantsFont;

@end

#endif /* PTVBroadcastParticipantsCountView_h */
