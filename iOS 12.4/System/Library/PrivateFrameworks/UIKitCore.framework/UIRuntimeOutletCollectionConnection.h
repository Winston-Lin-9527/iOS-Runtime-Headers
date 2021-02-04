/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:28:18 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIRuntimeConnection.h>

@class NSString;

@interface UIRuntimeOutletCollectionConnection : UIRuntimeConnection {

	NSString* runtimeCollectionClassName;
	BOOL addsContentToExistingCollection;

}

@property (copy) NSString * runtimeCollectionClassName; 
@property (assign) BOOL addsContentToExistingCollection; 
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(void)connect;
-(void)connectForSimulator;
-(NSString *)runtimeCollectionClassName;
-(void)performConnect;
-(void)setRuntimeCollectionClassName:(NSString *)arg1 ;
-(BOOL)addsContentToExistingCollection;
-(void)setAddsContentToExistingCollection:(BOOL)arg1 ;
@end
