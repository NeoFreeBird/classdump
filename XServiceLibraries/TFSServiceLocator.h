//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSServiceLocator_h
#define TFSServiceLocator_h
@import Foundation;

@class NSObject, NSString;

@interface TFSServiceLocator : NSObject { // (Swift)
    /* instance variables */
    B24@0:8@"NSString"16 graphQLTransportCache;
}

@property (nonatomic, readonly) NSString *accountID;

/* instance methods */
- (id)initWithAccountID:(id)id;
- (id)init;

@end

#endif /* TFSServiceLocator_h */
