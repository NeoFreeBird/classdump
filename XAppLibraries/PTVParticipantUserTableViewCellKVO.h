//
#ifndef PTVParticipantUserTableViewCellKVO_h
#define PTVParticipantUserTableViewCellKVO_h
@import Foundation;

#include "PTVMergeParticipantUser.h"
#include "PTVParticipantUserTableViewCell.h"
#include "PTVParticipantUserTableViewCellKVODelegate-Protocol.h"

@class NSString;

@interface PTVParticipantUserTableViewCellKVO : PTVParticipantUserTableViewCell {
    /* instance variables */
    PTVParticipantUserTableViewCellKVO *_weakSelf;
}

@property (weak, nonatomic) id <PTVParticipantUserTableViewCellKVODelegate> delegate;
@property (readonly, nonatomic) PTVMergeParticipantUser *user;
@property (retain, nonatomic) NSString *followEventSource;

/* instance methods */
- (void)dealloc;
- (void)observeValueForKeyPath:(id)path ofObject:(id)object change:(id)change context:(void *)context;
- (_Bool)_observeValueForKeyPath:(id)path ofObject:(id)object change:(id)change context:(void *)context;
- (id)initWithStyle:(long long)style reuseIdentifier:(id)identifier;
- (void)followUnfollowPressed;
- (void)unobserve;
- (void)setUser:(id)user loggedInUser:(id)user;
- (id)displayNameForCell;
- (void)refreshDisplayName;

@end

#endif /* PTVParticipantUserTableViewCellKVO_h */
