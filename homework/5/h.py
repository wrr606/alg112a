import random
def hillClimbing(f, p, h=1):
    failCount = 0                    # 失敗次數歸零
    while (failCount < 10000):       # 如果失敗次數小於一萬次就繼續執行
        fnow = f(p)                  # fxy 為目前高度
        fneighbor = p.copy()
        for i in range(len(fneighbor)):
            fneighbor[i]+=random.choice([-h, h, 0])
        fneighbornow=f(fneighbor)
        
        if fneighbornow > fnow:        # 如果移動後高度比現在高
            p = fneighbor.copy()        #   就移過去
            print('p=', p, 'f(p)=', f(p))
            failCount = 0            # 失敗次數歸零
        else:                        # 若沒有更高
            failCount = failCount + 1#   那就又失敗一次
    return (p,fnow)                 # 結束傳回 （已經失敗超過一萬次了）

def f(p):
    return -1*(p[0]**2+p[1]**2+p[2]**2)

hillClimbing(f, [100,100,300])