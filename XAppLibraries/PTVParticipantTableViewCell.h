//
#ifndef PTVParticipantTableViewCell_h
#define PTVParticipantTableViewCell_h
@import Foundation;

#include "PTVHeartView.h"
#include "PTVProfileImageView.h"
#include "PTVTableViewCell.h"
#include "PTVTintedImageView.h"

@class UILabel, UIView;

@interface PTVParticipantTableViewCell : PTVTableViewCell {
    /* instance variables */
    PTVTintedImageView *_followingImage;
    UIView *_colorUnderlay;
    long long _participant_index;
    long long _nHeartsSent;
    struct CGSize { double width; double height; } _heartSize;
    _Bool _didSendHearts;
    _Bool _isFollowing;
    _Bool _isPlaceholder;
}

@property (readonly, nonatomic) PTVProfileImageView *profileImage;
@property (readonly, nonatomic) UILabel *displayNameLabel;
@property (readonly, nonatomic) PTVHeartView *sentHeartImage;
@property (readonly, nonatomic) UILabel *sentHeartLabel;

/* class methods */
+ (id)DisplayNameFont;
+ (id)DisplayNameColor;
+ (id)SentHeartsLabelFont;
+ (id)SentHeartsLabelColor;
+ (id)PlaceholderParticipantColor;
+ (id)ReplayParticipantColor;
+ (id)ReplayImageTintColor;

/* instance methods */
- (void)dealloc;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)style reuseIdentifier:(id)identifier;
- (void)configureForUser:(id)user isFollowing:(_Bool)following numberOfHeartsSent:(long long)sent;
- (id)generateRandomPlaceholderDisplayName;
- (void)setIsPlaceholder:(_Bool)placeholder;
- (void)setParticipant_index:(long long)participant_index;
- (void)setNHeartsSent:(long long)sent;
- (void)setProfileImageURL:(id)url;
- (void)setProfileImageEntity:(id)entity type:(unsigned long long)type;
- (void)setDisplayName:(id)name;
- (void)setIsFollowing:(_Bool)following;
- (void)participantIndexState;
- (void)nHeartsState;

@end

#endif /* PTVParticipantTableViewCell_h */
