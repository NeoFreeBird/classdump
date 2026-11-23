//
#ifndef XFontEngineFeatureSwitches_h
#define XFontEngineFeatureSwitches_h
@import Foundation;

@class NSObject;

@interface XFontEngineFeatureSwitches : NSObject

/* class methods */
+ (_Bool)isNamedFontCacheEnabled;
+ (void)setNamedFontCacheEnabled:(_Bool)enabled;
+ (id /* block */)provider;
+ (void)setProvider:(id /* block */)provider;
+ (_Bool)boolForKey:(id)key;

@end

#endif /* XFontEngineFeatureSwitches_h */
