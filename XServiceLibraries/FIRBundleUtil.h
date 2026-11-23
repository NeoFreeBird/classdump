//
#ifndef FIRBundleUtil_h
#define FIRBundleUtil_h
@import Foundation;

@class NSObject;

@interface FIRBundleUtil : NSObject

/* class methods */
+ (id)relevantBundles;
+ (id)optionsDictionaryPathWithResourceName:(id)name andFileType:(id)type inBundles:(id)bundles;
+ (id)relevantURLSchemes;
+ (_Bool)hasBundleIdentifierPrefix:(id)prefix inBundles:(id)bundles;
+ (id)bundleIdentifierByRemovingLastPartFrom:(id)from;

@end

#endif /* FIRBundleUtil_h */
