//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef NSError_TFSAdditions_h
#define NSError_TFSAdditions_h
@import Foundation;

@interface NSError (TFSAdditions) <TNLRequestOperationCancelSource>

/* class methods */
+ (id)tfs_twitterMediaProcessingErrorWithDictionary:(id)dictionary;
+ (id)tfs_twitterMediaProcessingErrorWithCode:(long long)code name:(id)name message:(id)message;
+ (id)tfs_errorWithDomain:(id)domain code:(long long)code description:(id)description;

/* instance methods */
- (id)tfs_userUnavailable;
- (id)tfs_tweetUnavailable;
- (id)tnl_cancelSourceDescription;
- (id)tnl_cancelSourceOverrideError;
- (id)tfs_errorString;
- (_Bool)tfs_isNotConnectedToInternetError;
- (_Bool)tfs_isTimedOutError;
- (id)tfs_errorDomainAndCodeString:(_Bool)string;
- (_Bool)tfs_matchesDomain:(id)domain code:(long long)code;
- (_Bool)tfs_matchesDomain:(id)domain code:(long long)code checkUnderlyingErrors:(_Bool)errors;
- (id)tfs_errorByAddingUserInfo:(id)info;

@end

#endif /* NSError_TFSAdditions_h */
