/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:13:19 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /usr/lib/swift/libswiftCore.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol NSObject
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@optional
-(NSString *)debugDescription;

@required
-(BOOL)isProxy;
-(unsigned long long)retainCount;
-(BOOL)isEqual:(id)arg1;
-(Class)class;
-(id)self;
-(id)performSelector:(SEL)arg1;
-(id)performSelector:(SEL)arg1 withObject:(id)arg2;
-(id)performSelector:(SEL)arg1 withObject:(id)arg2 withObject:(id)arg3;
-(BOOL)isKindOfClass:(Class)arg1;
-(BOOL)isMemberOfClass:(Class)arg1;
-(BOOL)conformsToProtocol:(id)arg1;
-(BOOL)respondsToSelector:(SEL)arg1;
-(id)retain;
-(oneway void)release;
-(id)autorelease;
-(NSZone*)zone;
-(unsigned long long)hash;
-(Class)superclass;
-(NSString *)description;

@end
