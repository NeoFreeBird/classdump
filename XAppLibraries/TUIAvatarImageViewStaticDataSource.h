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
