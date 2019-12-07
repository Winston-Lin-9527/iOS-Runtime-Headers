/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:15:43 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <GameController/GameController-Structs.h>
@class NSNumber, NSString, NSData;

@interface _GCCControllerHIDServiceInfo : NSObject {

	IOHIDServiceClientRef _service;
	NSNumber* _registryID;
	NSString* _name;
	BOOL _isPreallocatedSiriRemote;
	NSData* _inputData;

}

@property (nonatomic,readonly) IOHIDServiceClientRef service; 
@property (nonatomic,retain) NSData * inputData;                           //@synthesize inputData=_inputData - In the implementation block
@property (assign,nonatomic) BOOL isPreallocatedSiriRemote;                //@synthesize isPreallocatedSiriRemote=_isPreallocatedSiriRemote - In the implementation block
-(void)dealloc;
-(id)name;
-(id)registryID;
-(IOHIDServiceClientRef)service;
-(id)initWithService:(IOHIDServiceClientRef)arg1 ;
-(NSData *)inputData;
-(void)setInputData:(NSData *)arg1 ;
-(BOOL)isPreallocatedSiriRemote;
-(void)setIsPreallocatedSiriRemote:(BOOL)arg1 ;
@end
