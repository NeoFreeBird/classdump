//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSAccountCredentials_h
#define TFSAccountCredentials_h
@import Foundation;

@class NSObject, NSString;

@interface TFSAccountCredentials : NSObject { // (Swift)
    /* instance variables */
    B24@0:8@"NSString"16 credentialsImpl;
}

@property (nonatomic, readonly) NSString *token;
@property (nonatomic, readonly) NSString *secret;
@property (nonatomic, readonly) _Bool needsSave;

/* instance methods */
- (id)initWithToken:(id)token secret:(id)secret;
- (_Bool)saveSecretIfNeededWithStore:(id)store error:(id *)error;
- (void)deferSecretIfNeededWithStore:(id)store;
- (_Bool)removeSecretWithStore:(id)store error:(id *)error;
- (id)init;

@end

#endif /* TFSAccountCredentials_h */
