//
#ifndef TFSTwitterUserReference_T1Sharing_h
#define TFSTwitterUserReference_T1Sharing_h
@import Foundation;

@interface TFSTwitterUserReference (T1Sharing) <T1ShareableByURL>

/* instance methods */
- (id)twitterURLForShare;
- (id)twitterURLForCopy;
- (id)_t1_twitterURLForShareWithSParam:(unsigned long long)sparam;
- (id)_t1_transformShareURL:(id)url;
- (_Bool)shareTokenInURLEnabled;
- (void)setShareTokenInURLEnabled:(_Bool)urlenabled;

@end

#endif /* TFSTwitterUserReference_T1Sharing_h */
