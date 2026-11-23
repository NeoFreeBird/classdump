//
#ifndef _TtP14TFSTwitterCore39TFSTwitterAccountFeatureSwitchProviding__Protocol_h
#define _TtP14TFSTwitterCore39TFSTwitterAccountFeatureSwitchProviding__Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"
#include "TFSFeatureSwitchProvider-Protocol.h"

@protocol TFSTwitterCore.TFSTwitterAccountFeatureSwitchProviding <NSObject>

@required

@property (nonatomic, readonly) id <TFSFeatureSwitchProvider> featureSwitchProvider;

@optional

@end

#endif /* _TtP14TFSTwitterCore39TFSTwitterAccountFeatureSwitchProviding__Protocol_h */
