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
