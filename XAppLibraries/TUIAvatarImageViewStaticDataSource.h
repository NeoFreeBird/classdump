//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TUIAvatarImageViewStaticDataSource_h
#define TUIAvatarImageViewStaticDataSource_h
@import Foundation;

#include "TUIAvatarImageViewDataSource-Protocol.h"
#include "TUIAvatarImageViewModel.h"

@class NSObject, NSString;

@interface TUIAvatarImageViewStaticDataSource : NSObject <TUIAvatarImageViewDataSource>

@property (retain, nonatomic) TUIAvatarImageViewModel *avatarImageViewModel;
@property (nonatomic) long long identityType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (id)initWithAvatarImageViewModel:(id)model;

@end

#endif /* TUIAvatarImageViewStaticDataSource_h */
