//
#ifndef _TtP14TFSTwitterCore31TFSTwitterAccountProfileActions__Protocol_h
#define _TtP14TFSTwitterCore31TFSTwitterAccountProfileActions__Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TFSTwitterCore.TFSTwitterAccountProfileActions <NSObject>

@required

/* required instance methods */
- (void)removeBannerImageWithResponseBlock:(id /* block */)block;
- (void)pinTweetWithStatusID:(id)id fromUserID:(id)id responseBlock:(id /* block */)block;
- (void)unpinTweetWithID:(id)id responseBlock:(id /* block */)block;

@optional

@end

#endif /* _TtP14TFSTwitterCore31TFSTwitterAccountProfileActions__Protocol_h */
