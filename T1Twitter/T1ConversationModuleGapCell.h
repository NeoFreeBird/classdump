//
#ifndef T1ConversationModuleGapCell_h
#define T1ConversationModuleGapCell_h
@import Foundation;

@class TFNTableViewCell, TFNTwitterAccount, UIImageView;

@interface T1ConversationModuleGapCell : TFNTableViewCell {
    /* instance variables */
    TFNTwitterAccount *_account;
    unsigned long long _options;
    UIImageView *_connectorEllipsisView;
}

@property (nonatomic) _Bool solidLineRendering;

/* class methods */
+ (double)height;

/* instance methods */
- (id)initWithStyle:(long long)style reuseIdentifier:(id)identifier;
- (void)prepareForReuse;
- (void)setConversationFromUser:(id)user asTweetstorm:(_Bool)tweetstorm options:(unsigned long long)options account:(id)account;
- (void)layoutSubviews;
- (id)_verticalEllipsisImage;
- (struct CGSize { double x0; double x1; })_t1_avatarSizeForOptions:(unsigned long long)options account:(id)account layoutMetrics:(id)metrics;

@end

#endif /* T1ConversationModuleGapCell_h */
