//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef OCFSubtaskFactory_h
#define OCFSubtaskFactory_h
@import Foundation;

@class NSObject;

@interface OCFSubtaskFactory : NSObject

/* class methods */
+ (id)subtaskClasses;
+ (id)subtaskClassesMap;
+ (Class)subtaskClassForTypeName:(id)name;
+ (id)supportedSubtaskTypeNames;
+ (id)subtaskVersions;

@end

#endif /* OCFSubtaskFactory_h */
