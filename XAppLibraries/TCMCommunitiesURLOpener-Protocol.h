//
#ifndef TCMCommunitiesURLOpener_Protocol_h
#define TCMCommunitiesURLOpener_Protocol_h
@import Foundation;

@protocol TCMCommunitiesURLOpener

@required

/* required instance methods */
- (void)open:(id)open from:(id)from;
- (void)openWithActiveTextRange:(id)range communityId:(id)id from:(id)from;

@optional

@end

#endif /* TCMCommunitiesURLOpener_Protocol_h */
