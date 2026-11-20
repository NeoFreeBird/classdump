//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
