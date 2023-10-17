dist = float(input('\nDigite distância em METROS p convertê-la: '))
print(f"""
{dist:.2f}m é igual a:

{dist/1000:.4f}km

{dist/100:.3f}hm

{dist/10:.2f}dam

{dist:.1f}m

{dist*10:.0f}dm

{dist*100:.0f}cm

{dist*1000:.0f}mm

{dist*10000:.0f}nm

{dist*100000:.0f}μm

{dist*1000000:.0f}pm

{dist*10000000:.0f}fm

{dist*100000000:.0f}am
""")
