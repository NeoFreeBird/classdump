//
#ifndef TAPAccountPerspectiveExchange_TBCTwitterAccount_h
#define TAPAccountPerspectiveExchange_TBCTwitterAccount_h
@import Foundation;

@interface TAPAccountPerspectiveExchange (TBCTwitterAccount)

/* class methods */
+ (id)compositionPerspectiveForPerspectiveOrNil:(id)nil;
+ (id)compositionPerspectiveForPerspective:(id)perspective;
+ (id)tavSessionFactoryAccountForPerspective:(id)perspective;
+ (id)tavSessionFactoryAccountForPerspectiveOrNil:(id)nil;
+ (id)tbcAccountForPerspective:(id)perspective;
+ (id)tbcAccountForPerspectiveOrNil:(id)nil;

@end

#endif /* TAPAccountPerspectiveExchange_TBCTwitterAccount_h */
