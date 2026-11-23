//
#ifndef TASSettings_PTVAdditions_h
#define TASSettings_PTVAdditions_h
@import Foundation;

@interface TASSettings (PTVAdditions)

/* instance methods */
- (_Bool)ptvLocked;
- (_Bool)isPublic;
- (long long)ptvNarrowCastType;
- (long long)ptvConversationControlType;
- (long long)ptvContentType;
- (id)ptvMentionedTwitterUserIDs;

@end

#endif /* TASSettings_PTVAdditions_h */
