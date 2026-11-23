//
#ifndef PTVLoader_h
#define PTVLoader_h
@import Foundation;

@class NSError, NSMutableArray, NSObject;

@interface PTVLoader : NSObject {
    /* instance variables */
    NSMutableArray *_loadingCallbacks;
}

@property (readonly, nonatomic) unsigned long long state;
@property (readonly, nonatomic) NSError *error;

/* instance methods */
- (id)init;
- (void)loadWithCallback:(id /* block */)callback;
- (void)performLoad;
- (void)didLoadSuccessfully;
- (void)didFailToLoadWithError:(id)error;
- (void)loadingDidCompleteWithSuccess:(_Bool)success error:(id)error;
- (void)mainQueue_loadingDidCompleteWithSuccess:(_Bool)success error:(id)error;

@end

#endif /* PTVLoader_h */
