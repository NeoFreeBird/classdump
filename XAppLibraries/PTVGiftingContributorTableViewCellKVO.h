//
#ifndef PTVGiftingContributorTableViewCellKVO_h
#define PTVGiftingContributorTableViewCellKVO_h
@import Foundation;

#include "PTVGiftingContributorTableViewCell.h"
#include "PTVMergeParticipantUser.h"
#include "PTVVirtualGiftContributor.h"

@interface PTVGiftingContributorTableViewCellKVO : PTVGiftingContributorTableViewCell {
    /* instance variables */
    PTVMergeParticipantUser *_user;
    PTVGiftingContributorTableViewCellKVO *_weakSelf;
    PTVVirtualGiftContributor *_contributor;
    long long _maxContribution;
    _Bool _isActiveContributor;
}

/* instance methods */
- (void)dealloc;
- (id)initWithStyle:(long long)style reuseIdentifier:(id)identifier;
- (void)setContributor:(id)contributor maxContribution:(long long)contribution isActiveContributor:(_Bool)contributor;
- (void)updateBlockingState;
- (void)updateFollowButton;
- (void)observeValueForKeyPath:(id)path ofObject:(id)object change:(id)change context:(void *)context;
- (void)observeUser;
- (void)unobserveUser;

@end

#endif /* PTVGiftingContributorTableViewCellKVO_h */
