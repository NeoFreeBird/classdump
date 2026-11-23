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
