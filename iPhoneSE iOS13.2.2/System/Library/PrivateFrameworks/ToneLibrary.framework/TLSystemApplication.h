/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:15:35 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface TLSystemApplication : NSObject {

	NSString* _bundleIdentifier;
	NSString* _name;

}

@property (readonly) NSString * bundleIdentifier;              //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (readonly) NSString * name;                          //@synthesize name=_name - In the implementation block
+(id)defaultSystemApplication;
-(NSString *)name;
-(NSString *)bundleIdentifier;
-(id)initWithBundleIdentifier:(id)arg1 name:(id)arg2 ;
@end
