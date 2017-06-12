//Code chuẩn tìm kiếm nhị phân:
while (l<=r){
mid = (l+r)>>1;
if (t>mid) l=mid+1;
else r=mid-1,res=mid;
}
cout<<res;
