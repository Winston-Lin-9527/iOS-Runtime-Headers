/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:28:31 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIDropProposal.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface UITextDropProposal : UIDropProposal <NSCopying> {

	BOOL _useFastSameViewOperations;
	unsigned long long _dropAction;
	unsigned long long _dropProgressMode;
	unsigned long long _dropPerformer;

}

@property (assign,nonatomic) unsigned long long dropAction;                    //@synthesize dropAction=_dropAction - In the implementation block
@property (assign,nonatomic) unsigned long long dropProgressMode;              //@synthesize dropProgressMode=_dropProgressMode - In the implementation block
@property (assign,nonatomic) BOOL useFastSameViewOperations;                   //@synthesize useFastSameViewOperations=_useFastSameViewOperations - In the implementation block
@property (assign,nonatomic) unsigned long long dropPerformer;                 //@synthesize dropPerformer=_dropPerformer - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithDropOperation:(unsigned long long)arg1 ;
-(void)setUseFastSameViewOperations:(BOOL)arg1 ;
-(unsigned long long)dropPerformer;
-(BOOL)useFastSameViewOperations;
-(unsigned long long)dropProgressMode;
-(unsigned long long)dropAction;
-(void)setDropAction:(unsigned long long)arg1 ;
-(void)setDropProgressMode:(unsigned long long)arg1 ;
-(void)setDropPerformer:(unsigned long long)arg1 ;
@end
