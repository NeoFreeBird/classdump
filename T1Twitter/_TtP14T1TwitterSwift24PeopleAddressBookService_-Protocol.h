//
#ifndef _TtP14T1TwitterSwift24PeopleAddressBookService__Protocol_h
#define _TtP14T1TwitterSwift24PeopleAddressBookService__Protocol_h
@import Foundation;

#include "_TtP14T1TwitterSwift30PeopleAddressBookSynchronizing_-Protocol.h"

@protocol T1TwitterSwift.PeopleAddressBookService <T1TwitterSwift.PeopleAddressBookSynchronizing>

@required

@property (nonatomic, readonly) _Bool contactsFetchAuthorized;

/* required instance methods */
- (id)fetchActiveContactsRecommendationsWithDelegate:(id)delegate completion:(id /* block */)completion;

@optional

@end

#endif /* _TtP14T1TwitterSwift24PeopleAddressBookService__Protocol_h */
