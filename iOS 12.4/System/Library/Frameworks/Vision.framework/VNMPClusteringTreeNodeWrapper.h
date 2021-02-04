/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:20:37 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface VNMPClusteringTreeNodeWrapper : NSObject {

	BOOL _freeNodeOnDealloc;
	void* _node;

}

@property (assign) void* node;                          //@synthesize node=_node - In the implementation block
@property (assign) BOOL freeNodeOnDealloc;              //@synthesize freeNodeOnDealloc=_freeNodeOnDealloc - In the implementation block
-(id)initWithNode:(void*)arg1 freeNodeOnDealloc:(BOOL)arg2 ;
-(void)setFreeNodeOnDealloc:(BOOL)arg1 ;
-(int)nodeId;
-(float)avgDistance;
-(int)leafsCount;
-(id)getLeafNodes;
-(BOOL)freeNodeOnDealloc;
-(id)left;
-(id)right;
-(void)dealloc;
-(id)descriptor;
-(float)distance;
-(void*)node;
-(void)setNode:(void*)arg1 ;
@end
